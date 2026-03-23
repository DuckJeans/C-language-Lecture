#include <stdio.h>

void main()
{
#pragma region 조건문
	//어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
//두개의 피연산자의 값을 비교하여 그 결과를 0 또는
// 1이라는 값으로 나타내는 연산자입니다.

//printf("10 < 20 : %d\n", 10 < 20);
//
//printf("10 > 20 : %d\n", 10 > 20);
//
//printf("10 <= 20 : %d\n", 10 <= 20);
//
//printf("10 >= 20 : %d\n", 10 >= 20);
//
//printf("10 != 10 : %d\n", 10 != 10);
//
//printf("10 == 10 : %d\n", 10 == 10);

//관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
// 조건이 틀릴 때 0이라는 값으로 반환됩니다.
#pragma endregion

#pragma region if문
	//어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	//명령문입니다.

	//int health = 0;
	//
	//if (health <= 0)
	//{
	//	printf("플레이어 사망 (플레이어 체력 : %d)", health);
	//}

	//if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
	//if문의 조건이 틀릴 때 else if문의 조건이
	//맞다면 실행되는 명령문입니다.

	//int health = 50;
	//
	//if (health <= 0)
	//{
	//	printf("플레이어 사망");
	//}
	//else if (health > 0)
	//{
	//	printf("플레이어 생존");
	//}
	// else if문은 여러번 정의할 수 있으며, if문이
	// 존재할 때 사용할 수 있습니다.

#pragma endregion

#pragma region else문

	//if문과 else if문의 조건이 다 틀리면
	//실행되는 명령문입니다.

	//int integer = 0;
	//
	//if (integer < 0)
	//{
	//	printf("0보다 작습니다.");
	//}
	//else if (integer > 0)
	//{
	//	printf("0입니다.");
	//}
	//else
	//{
	//	printf("0보다 큽니다.");
	//}
	//if문에 연결된 모든 조건문이 조건이 맞을 때
	//가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region swtich문

	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.
	// switch문은 해당 조건이 완료되었을 때, break문이 없으면
	// 나머지 밑에 있는 case문까지 계속 실행시키다가 종료합니다.

	//char grade = 'F';
	//
	//switch (grade)
	//{
	//case 'A': printf("90~100");
	//	break;
	//case 'B': printf("89~80");
	//	break;
	//case 'C': printf("79~70");
	//	break;
	//case 'D': printf("69~60");
	//	break;
	//case 'F': printf("Lower than 60score");
	//	break;
	//default: printf("Null");
	//	break;
	//}
	//switch문의 경우 조건에 해당하는 값에 따라 조건의
	//위치로 이동합니다.
#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
	// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다.

	//int a = 10;
	//int b = 20;
	//
	//if (a > 0 && b > 0)
	//{
	//	printf("true");
	//}
#pragma endregion

#pragma region OR 연산자

	//두 개의 조건 중에 하나라도 조건이 성립될 때 실행되는 연산자입니다.

	//int a = 10;
	//int b = 20;
	//
	//if (a < 0 || b > 0)
	//{
	//	printf("true");
	//}

	//조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면, 그 이후의 평가는 생략합니다.
#pragma endregion

#pragma region NOT 연산자
//하나의 조건을 반전시키는 연산자입니다.

	//int a = 0;
	//
	//if (!a)
	//{
	//	printf("true");
	//}

#pragma endregion

#pragma endregion

#pragma region 사분면

	//int x = 0;
	//int y = 0;
	//
	//if (x == 0)
	//{
	//	if (y == 0)
	//	{
	//		printf("(%d,%d)원점입니다.\n", x, y);
	//	}
	//
	//	else if (y > 0)
	//	{
	//		printf("(%d,%d)+y절편입니다.\n", x, y);
	//	}
	//
	//	else if (y < 0)
	//	{
	//		printf("(%d,%d)-y절편입니다.\n", x, y);
	//	}
	//}
	//
	//else if (y == 0)
	//{
	//	if (x > 0)
	//	{
	//		printf("(%d,%d)+x절편입니다.\n", x, y);
	//	}
	//
	//	else if (x < 0 && y == 0)
	//	{
	//		printf("(%d,%d)-x절편입니다.\n", x, y);
	//	}
	//}
	//
	//else if (x > 0)
	//{
	//	if (y > 0)
	//	{
	//		printf("(%d,%d)1사분면입니다.\n", x, y);
	//	}
	//
	//	else
	//	{
	//		printf("(%d,%d)4사분면입니다.\n", x, y);
	//	}
	//}
	//
	//else if (y > 0)
	//{
	//	if (x < 0)
	//	{
	//		printf("(%d,%d)2사분면입니다.\n", x, y);
	//	}
	//
	//	else
	//	{
	//		printf("(%d,%d)3사분면입니다.\n", x, y);
	//	}
	//}
	//
	//else
	//{
	//	printf("어느 조건에도 해당되지 않습니다.");
	//}
#pragma endregion
#pragma endregion

}