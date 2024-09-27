#include "CProperty.h"

ACProperty::ACProperty()
{
	PrimaryActorTick.bCanEverTick = true;
	//이 생성자가 언제 호출되는지 보고싶다
	NumB = 999;

	GLog->Log("ACProperty::ACProperty()");
	 // *ptr = 99; 이거는 말도안되는 문법 이렇게 하면 터짐


}

void ACProperty::BeginPlay()
{
	Super::BeginPlay();

	FString Message;
	//Message.Append("A = ");
	//Message.Append(FString::FromInt(NumA));

	Message = FString::Printf(TEXT("NumA = %d, NumB = %d, NumC = %d"), NumA, NumB, NumC);
	GEngine->AddOnScreenDebugMessage(-1, 5.f,FColor::White,Message); //키가 다르다 uint와 int 이것은 우선순위이며 클수록 밑으로 내려 감
}

void ACProperty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

