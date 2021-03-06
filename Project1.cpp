// Project1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <string>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main()
{
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");


Task();
return 0;
}

void Task()
{
    int menu_1 = 0;
    int menu_2 = 0;
    int is_exit = 0;
    
    while(!is_exit){
        fscanf(in_fp, "%d %d", &menu_1, &menu_2);
        
        switch(menu_1){
            case 1:
            {
                switch(menu_2){
                    case 1: //회원가입
                    {
                        joinMember();
                        break;
                    }
                    case 2: //로그인
                    {
                        login();
                        break;
                    }
                    case 3: //회원탈퇴
                    {
                        deleteMyID();
                        break;
                    }
                    case 4: //상품 구매 내역 조회
                    {
                        break;
                    }
                    case 5: //상품 정보 검색 및 구매
                    {
                        break;
                    }
                    case 6: //판매 의류 등록
                    {
                        break;
                    }
                    case 7:
                    {
                        switch(menu_2)
                        {
                            case 1: //종료
                            {
                                logout();
                                is_exit = 1;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
void joinMember() //회원가입
{
    char 이름[MAX_STRING], ID[MAX_STRING], 주민번호[MAX_STRING], PW[MAX_STRING];

    fprintf(out_fp, "1.1 회원가입 \n");
    fprintf(out_fp,"%s %s %s %s\n", 이름, 주민번호, ID, PW);    
}

void deleteMyID() //회원탈퇴
{}

void login() //로그인
{
    char ID[MAX_STRING], PW[MAX_STRING];
    scanf("%s %s", ID, PW);
    fprintf(out_fp, "2.1 로그인 \n");
    fprintf(out_fp,"%s %s \n", ID, PW); 

}

void logout(){  // 로그아웃

}
