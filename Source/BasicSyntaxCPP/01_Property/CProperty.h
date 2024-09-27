#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CProperty.generated.h" // �� ����� ���׷���Ʈ �ٵ� �־�� �о���°� ������ ���带 �ϸ� �ڵ����� ����

UCLASS()  // uclass ��ũ�� uclass ��� ��ũ�ΰ����� �� Ŭ������ �����Ϳ� ���¾� ���
class BASICSYNTAXCPP_API ACProperty : public AActor // ���������ý�cpp�� ���ӽ����̽� ��ũ�α⿡ ������ ���ֱ����� ���
{						// Ŭ�����̸� �տ� A�� ������ �ڵ����� ������ ���͸� ��ӹ޾ұ⶧�� �����Ϳ��� �о���°� �ĺ��ϱ����� ���λ� �ʼ�
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACProperty();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditInstanceOnly, Category = "Numeric", BlueprintReadOnly)
	int32 NumA = 10;

	UPROPERTY(EditDefaultsOnly, Category = "Numeric", BlueprintReadOnly)
	int32 NumB;

	UPROPERTY(EditAnywhere, Category = "Numeric", BlueprintReadWrite)
	int32 NumC = 30;

private:
	UPROPERTY(VisibleInstanceOnly, Category = "Real")
	float RealA = 1.11f;

	UPROPERTY(VisibleDefaultsOnly, Category = "Real")
	float RealB = 2.22f;

	UPROPERTY(VisibleAnywhere, Category = "Real")
	float RealC = 3.33f;

	UPROPERTY(EditAnywhere, Category = "MyActor")
	AActor* OtherActor;        // ���⿡ ���ι��� �ȵ����� ���̱׳� 0�̵��´�
};
