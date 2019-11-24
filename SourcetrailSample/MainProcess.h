#pragma once

class MainProcess
{
public:
private:
	int paramA;
	int paramB;
	int paramC;

public:
	MainProcess();
	~MainProcess() = default;
	int Run();
	void SetParameter(int a, int b, int c);
private:
	int FuncA() const;
};

