#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	//int data = 10;
	//
	//printf("%p", &data);
#pragma endregion

#pragma region 표준 입력 함수
	// 여러 종류의 데이터를 다양한 서식에 맞추어
	// 입력해주는 함수입니다.

	//int x = 0;

	// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
	// 넘어갈 수 없습니다.

	//printf("숫자를 입력하세요 : ");

	//scanf_s("%d", &x);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
		
	//printf("x의 값 : %d\n",x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관
	// 하였다가 입력하는 순간 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	//int room = 10;
	//int storage = 20;
	//
	//int *p = &room;

	// 포인터가 가르키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가르키는 메모리의 자료형을 선언해주어야 합니다.

	//printf("&room : %p\n", &room);
	//printf("p : %p\n", p);
	//printf("&p : %p", &p);

	//*p = 99;
	//printf("&room : %p\n", &room);
	//printf("room : %d\n", room);
	//printf("포인터변수가 가르키는 값 : %d\n\n", *p);
	//
	//p = &storage;
	//
	//printf("p변수 값 : %p\n", p);
	//printf("포인터변수가 가르키는 값 : %d\n\n", *p);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에
	// 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리킵니다.

	//printf("p 변수의 크기 : %u\n", sizeof(p));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로
	// 정해지며, 한 번에 처리할 수 있는 크기는 운영 체제에 따라 크기가 결정됩니다.
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	//int level = 1;
	//char rank = 'S';
	//float attack = 12.5f;
	//void* voidstick = NULL;

	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.

	//voidstick = &rank;
	//
	//*(char*) voidstick = 'A'; //형변환 후 값 바꾸기
	//
	//printf("voidstick 주소 : %p\n", voidstick);
	//printf("rank주소 : %p\n", &rank);
	//printf("rank : %c\n\n", rank);
	//
	//
	//voidstick = &level;
	//
	//*(int*)voidstick = 5;
	//
	//printf("voidstick 주소 : %p\n", voidstick);
	//printf("level 주소 : %p\n", &level);
	//printf("level : %d\n\n", level);
	//
	//
	//voidstick = &attack;
	//
	//*(float*)voidstick = 17.5f;
	//
	//printf("voidstick 주소 : %p\n", voidstick);
	//printf("attack 주소 : %p\n", &attack);
	//printf("attack : %f\n\n", attack);
	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 변환해주어야 합니다.
#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수
	// 없도록 지정되어 있는 포인터입니다.

	//int y = 10;
	//int z = 20;
	//const int* address = NULL;
	//
	//address = &y;

	// *address = 15;

	//printf("%p\n", &y);
	//printf("%p\n\n", address);
	//
	//address = &z;
	//
	//printf("%p\n", &z);
	//printf("%p\n", address);
#pragma endregion

#pragma region 포인터 상수
	// 포인터 변수가 가리키고 있는 주소 값을 변경할 수
	// 없는 포인터입니다.

	//int y = 10;
	//int z = 20;
	//int* const address = &y;
	//
	//*address = 20;
	//
	//printf("address 값 : %d\n", *address);
	//printf("y 값 : %d\n", y);
#pragma endregion

}