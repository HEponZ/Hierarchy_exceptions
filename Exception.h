#pragma once
#include <iostream>

using namespace std;

class Exception
{
public:

	virtual void what() {}
};

class Division_by_zero : public Exception 
{
private:
	char* message;

public:
	Division_by_zero() : message{ new char[strlen("�� 0 ������ ������!\n")+1]}
	{
		strcpy_s(message, strlen("�� 0 ������ ������!\n") + 1, "�� 0 ������ ������!\n");
	};

	void what()
	{
		printf(message);
	}
};

class File_open_exc : public Exception
{
private:
	char* message;

public:
	File_open_exc() : message{ new char[strlen("������ �������� �����\n") + 1] }
	{
		strcpy_s(message, strlen("������ �������� �����\n") + 1, "������ �������� �����\n");
	};

	void what()
	{
		printf(message);
	}
};

class File_close_exc : public Exception
{
private:
	char* message;

public:
	File_close_exc() : message{ new char[strlen("������ �������� �����\n") + 1] }
	{
		strcpy_s(message, strlen("������ �������� �����\n") + 1, "������ �������� �����\n");
	};

	void what()
	{
		printf(message);
	}
};

class Stack_overflow : public Exception
{
private:
	char* message;

public:
	Stack_overflow() : message{ new char[strlen("������������ ������\n") + 1] }
	{
		strcpy_s(message, strlen("������������ ������\n") + 1, "������������ ������\n");
	};

	void what()
	{
		printf(message);
	}
};