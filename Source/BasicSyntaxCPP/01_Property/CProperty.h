

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CProperty.generated.h" // �� ����� ���׷���Ʈ �ٵ� �־�� �о���°� ������

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

};
