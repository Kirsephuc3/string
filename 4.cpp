//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//void tach(char a[], char result[]) {
//	char* p = strtok(a, ", ");
//	while (p != NULL) {
//		p = strtok(NULL, ", ");
//		strcat(result, " ");
//	}
//	cout << " Chuoi da phuc hoi: " << a << endl;
//}
//int main() {
//	char a[20];
//	char result[20];
//	cout << " Nhap ho, ten: ";
//	cin.getline(a, 20);
//	tach(a, result);
//	return 0;
//}
// // loi tren visual studio
//#define _CRT_SECURE_NO_WARNINGS
// #include<iostream>
// #include<cstring>
// #include<string>
// #include <windows.h>
// using namespace std;
// void tachandnoi(char *s)
// {
//     char kq[100];
//     int n = strlen(s);
//    char *p = strtok(s," ");
//    while(p!=NULL)
//    {
//        cout << p << endl;
//         strcat(kq,p);
//        strcat(kq," ");
//        p = strtok(NULL," ");
//    }
//    cout << "Kq = " << kq << endl;
// }
// int main ()
// {
//     char s[100],kq[100];
//     cout << "Nhap vao ho va ten : ";
//     cin.getline(s,100);
//     tachandnoi(s);
//     return 0;
// }