 #include<iostream>
using namespace std;
float PhepCong(float a, float b)
{
	return a + b;
}
float PhepChia(float a, float b)
{
	return a / b;
}
int main()
{
	float x=4, y=6;
//	cin >> x >> y;
	cout << "Phep cong " << PhepCong(x,y);
	cout << "Phep Chia " << PhepChia(x, y);
	cout << "Phep nhan " << x * y;
	// da code them 

}