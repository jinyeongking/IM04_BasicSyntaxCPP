#include "CProperty.h"

ACProperty::ACProperty()
{
	PrimaryActorTick.bCanEverTick = true;
	//�� �����ڰ� ���� ȣ��Ǵ��� ����ʹ�
	NumB = 999;

	GLog->Log("ACProperty::ACProperty()");
	 // *ptr = 99; �̰Ŵ� �����ȵǴ� ���� �̷��� �ϸ� ����


}

void ACProperty::BeginPlay()
{
	Super::BeginPlay();

	FString Message;
	//Message.Append("A = ");
	//Message.Append(FString::FromInt(NumA));

	Message = FString::Printf(TEXT("NumA = %d, NumB = %d, NumC = %d"), NumA, NumB, NumC);
	GEngine->AddOnScreenDebugMessage(-1, 5.f,FColor::White,Message); //Ű�� �ٸ��� uint�� int �̰��� �켱�����̸� Ŭ���� ������ ���� ��
}

void ACProperty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

