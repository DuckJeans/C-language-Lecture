#include <stdio.h>
#include <stdlib.h>

void main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

#pragma region malloc(memory allocation)

	// 프로그램이 실행되는 동안 메모리 관리자에게 메모리를 요청하고
	// 해당하는 메모리의 시작 주소를 반환하는 함수입니다.

	//int* x = (int*)malloc(sizeof(int));
	//*x = 100;
	//
	//printf("x 값 : %d\n", *x);
	//
	//free(x);
	//
	//printf("x 값 : %d\n", *x);

	// 이미 해제된 메모리를 가리키는 포인터의 경우 예기치 않은
	// 동작을 유발할 수 있습니다.
#pragma endregion

#pragma region contiguous allocation
	// 연속된 메모리 공간을 확보하고, 모든 요소의 값을 0으로
	// 초기화한 뒤 메모리의 시작 주소를 반환하는 함수입니다.

	//int* address = calloc(sizeof(int),5);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("address[%d] : %d\n", i, address[i]);
	//}
	//
	//free(address);

#pragma endregion

#pragma region resize allocation
	// 이미 할당된 메모리 공간의 크기를 확장하거나, 변경할 수 있는
	// 함수입니다.

	//int* mal = (int*)malloc(sizeof(int) * 3);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	mal[i] = (i + 1) * 10;
	//
	//	printf("mal[%d] = %d\n", i, mal[i]);
	//}
	//
	//int* temporary = (int*)realloc(mal,sizeof(int) * 5);
	//
	//if (temporary == NULL)
	//{
	//	free(mal);
	//
	//	return 1;
	//}
	//
	//mal = temporary; 
	//
	//mal[3] = 40;
	//mal[4] = 50;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("mal[%d] = %d\n", i, mal[i]);
	//}
	//
	//free(mal);
#pragma endregion


	// 동적 할당은 실행시간에 기반적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다.
#pragma endregion


	return 0;

}