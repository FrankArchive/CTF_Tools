#pragma once
//����д�����оȾ���Orz
#include<string>
enum type {
	ADDR, LNG, FLT, STR
};
class FSBuilder {
	const char *index[100] = { "$p\0","$d\0","$f\0","$s\0" };
	std::string constructed;
	int maxlen;
public:
	void read(int offset, type as);
	void write(int offset);
	std::string result();
};