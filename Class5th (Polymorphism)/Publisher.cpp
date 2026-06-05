#include "Packet.h"
#include <iostream>
using namespace std;

void Packet::Send(int frequency)
{
	cout << "frequency: " << frequency << endl;
}
void Packet::Send(const char* message)
{
	cout << "message:" << message << endl;
}
void Packet::Send(const char* message, int frequency)
{
	cout << "message:" << message << frequency << endl;
}