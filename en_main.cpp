#include<windows.h>
#include<iostream>
int x(0);
int y(0);
int main(void){
	for (;;){
		if (x == 60){
			system("CLS");
			std::cout << "Hour is not exists in this Example (Coming Soon).";
			std::cout << "\n" << "Thanks!";
			std::cout << "\n" << "GitHub: https://github.com/PowerHandle";
			exit(0);
		}
	    if (y >= 59){
	    	x += 1;
	    	system("CLS");
	    	y = 0;
		}
		if (x >= 1){
			if (x == 10){
				if(y >= 9){
					y += 1;
					system("CLS");
					std::cout << x << ":" << y;
					Sleep(1000);
				}else{
					if (y == 0){
					    std::cout << x << ":" << "0" << y;
						Sleep(1000);
						system("CLS");
						y += 1;
						std::cout << x << ":" << "0" << y;
						Sleep(1000);
					}else{
					    y += 1;
						system("CLS");
						std::cout << x << ":" << "0" << y;
						Sleep(1000);
					}
				}
			}else{
			    if(y >= 9){
				    y += 1;
					system("CLS");
					std::cout << "0" << x << ":" << y;
					Sleep(1000);
				}else{
					if (y == 0){
					    std::cout << "0" << x << ":" << "0" << y;
						Sleep(1000);
						system("CLS");
						y += 1;
						std::cout << "0" << x << ":" << "0" << y;
						Sleep(1000);
					}else{
					    y += 1;
						system("CLS");
						std::cout << "0" << x << ":" << "0" << y;
						Sleep(1000);
					}
				}
			}
		}else{
			if(y >= 9){
			    y += 1;
				system("CLS");
				std::cout << "0" << x << ":" << y;
				Sleep(1000);
			}else{
				if (y == 0){
				    std::cout << "0" << x << ":" << "0" << y;
				    Sleep(1000);
				    system("CLS");
				    y += 1;
				    std::cout << "0" << x << ":" << "0" << y;
				    Sleep(1000);
				}else{
					y += 1;
				    system("CLS");
					std::cout << "0" << x << ":" << "0" << y;
					Sleep(1000);
				}
			}
		}
	}
}
