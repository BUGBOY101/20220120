#define	_CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#define f(x) x*x
struct student {
	int a;
	int b;
}stu;
int main() {
	//stu = { 1,2 };
	stu.a = 1;
	cout << stu.a << endl;
}
//int main() {
//	/*char s[10] = "abcd";
//	int i = 0;
//	while (s[i] != '\0')
//		i++;
//	cout << "×Ö·û´®³¤¶ÈÎª£º" << i << endl;*/
//
//	int m = 1, k = 2;
//	cout << f(k + m) / f(k + m) << endl;
//
//	#ifdef STAT 1
//	cout << "x" << endl;
//	#endif
//	cout << "z" << endl;
//}

//#include<iostream>
//using namespace std;
//void copy(char* s1, char* s2) {
//	int i = 0;
//	while (s2[i] != '\0') {
//		s1[i] = s2[i];
//		i++;
//	}
//
//	s1[i] = '\0';
//}
//int main() {
//	char s1[10], s2[10];
//	cin >> s1 >> s2;
//	copy(s1, s2);
//	int n = strlen(s1);
//	for (int i = 0; i < n; i++)
//		cout << s1[i];
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
//void swap(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//
//	int k = 1, a[2];
//	a[1] = 1;
//	
//
//	/*int i;
//	for (i = 0; i++ < 6;)
//		cout << i << endl;
//	cout << i << endl;*/
//
//	/*int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	if (a > b) {
//		swap(&a, &b);
//	}
//	if (a > c)
//		swap(a, c);
//	if (a > d)
//		swap(a, d);
//	if (b > c)
//		swap(b, c);
//	if (b > d)
//		swap(b, d);
//	if (c > d)
//		swap(c, d);
//	cout << a << b << c << d << endl;*/
//}

//#include<iostream>
//using namespace std;
//void f(int n, int* s) {
//	int a, b;
//	if (n < 2) {
//		*s = 1;
//	}
//	else {
//		f(n - 1, &a);
//		f(n - 2, &b);
//		*s = a + b;
//	}
//}
//int main() {
//	int x = 6;
//	f(6, &x);
//	cout << x << endl;
//}