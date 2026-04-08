#include <stdio.h>
#include <math.h>

struct gameObject
{
	char rank;
	const char* name;
	double experience;
};

struct Ability
{
	short strength;
	double dexterity;
	int vitality;
};

struct Point2D
{
	int x;
	int y;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	//struct gameObject gameObject = { 'S',"Reaper",90.85 };
	//
	//printf("gameObject의 rank : %c\n", gameObject.rank);
	//printf("gameObject의 name : %s\n", gameObject.name);
	//printf("gameObject의 experience : %lf\n", gameObject.experience);
	//
	//gameObject.rank = 'A';
	//gameObject.name = "isolation";
	//gameObject.experience = 55.60;
	//
	//printf("gameObject의 rank : %c\n", gameObject.rank);
	//printf("gameObject의 name : %s\n", gameObject.name);
	//printf("gameObject의 experience : %lf\n", gameObject.experience);

	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서내도 초기화되며,
	// 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 시작됩니다.

#pragma endregion

#pragma region 바이트 패딩
   // 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
   // 읽을 수 있도록, 컴파일러가 레스지터의 블록에
   // 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	//printf("gameObject의 크기 : &u\n", sizeof(struct gameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// 가장 큰 자료형의 배수가 되도록 합니다.

	//printf("Ability의 크기 : &u\n", sizeof(struct Ability));

	// 구조체의 크기의 경우 멤버의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있습니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	//printf("%lf\n", sqrt(49)); // 루트
	//printf("%lf\n", pow(2,3)); // 제곱

	//struct Point2D slime = { -4,-7 };
	//struct Point2D player = { 1,1 };
	//
	//double x = slime.x - player.x;
	//double y = slime.y - player.y;
	//
	//double distance = sqrt(pow(x, 2) + pow(y, 2));
	//
	//printf("distance : %lf\n", distance);
	//
	//if (distance >= 5.0f)
	//{
	//	printf("safe");
	//}
	//else
	//{
	//	printf("danger");
	//}
#pragma endregion



	return 0;
}