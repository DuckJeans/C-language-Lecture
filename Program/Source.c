#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.
	
	//배열의 경우 첫 번째 원소는 0부터 시작합니다.
	//int array[5];
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i +1) * 10;
	//
	//	printf("array[%d] : %d\n",i, array[i]);
	//}

	// 배열의 메모리 공간을 프로그램이 실행되는 동안
	// 변경할 수 없습니다.

	//int array[] = { 1,2,3,4,5 };
	//
	//int size = sizeof(array) / sizeof(array[0]);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("array[%d]의 크기 : %d바이트\n", i, array[i]);
	//}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	int array[] = { 10, 20, 30, 40 ,50 };

	int* p = NULL;

	p = &array[0];
	printf("array[0]의 주소 값 : %p\n", p);
	printf("array[0]의 값 : %d\n", array[0]);

	p = p + 1;

	printf("array[1]의 주소 값 : %p\n", p);
	printf("array[1]의 값 : %d\n", array[1]);

	*p = 22;

	printf("바뀐 array[1]의 값 : %d\n", array[1]);

	// 배열의 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 의미합니다.
#pragma endregion

}