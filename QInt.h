#ifndef _QINT_H
#define _QINT_H

#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class QInt {
public:
	const static int NUM_OF_INT = 4;
	int data[NUM_OF_INT];

	void changeBit(int pos);
	int getBit(int post);
	void addToOne();
	bool isZero();

	void DecToQInt(string val);
	void BinToQInt(string val);
	void HexToQInt(string val);

	static int oddToOne(char c);
	static string addString(string a, string b);
	static string stringDivTwo(string s, bool isKeepZero = 0);
	static string twoPowN(int n);
	static void binaryShiftLeft(string &bin, int n);
	static void binaryShiftRight(string &bin, int n);
	static string sumBinaryString(string &a, string &b);
	static string subBinaryString(string &a, string b);

public:
	QInt();
	QInt(string x);

	string toBinary(bool isClean=0);
	string toString();
	string toHexa();

	QInt& operator=(const QInt &n);
	QInt operator+(QInt &b);
	QInt operator-(QInt &b);
	QInt operator*(QInt b);
	QInt operator/(QInt b);
	QInt operator<<(int n);
	QInt operator>>(int n);
	QInt operator&(QInt &b);
	QInt operator|(QInt &b);
	QInt operator^(QInt &b);
	QInt operator~();
	
	void rol(int n);
	void ror(int n);

	bool operator>(QInt &b);
	bool operator<(QInt &b);
	bool operator>=(QInt &b);
	bool operator<=(QInt &b);
	bool operator!=(QInt &b);
	bool operator==(QInt &b);

	static string binaryToDecimal(string binary);
	static string binaryToHexa(string binary);

	friend ostream& operator<<(ostream& os, QInt &n);
	friend istream& operator>>(istream& is, QInt &n);
};

#endif