#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CProperty.generated.h" // 이 헤더와 제네레이트 바디가 있어야 읽어오는게 가능함 빌드를 하면 자동으로 생성

UCLASS()  // uclass 매크로 uclass 라는 매크로가없음 이 클래스는 에디터에 없는애 취급
class BASICSYNTAXCPP_API ACProperty : public AActor // 베이직신택스cpp는 네임스패이스 매크로기에 구별을 해주기위해 사용
{						// 클래스이름 앞에 A가 붙은건 자동으로 붙은것 엑터를 상속받았기때문 에디터에서 읽어오는걸 식별하기위해 접두사 필수
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
	AActor* OtherActor;        // 여기에 따로뭔가 안들어오면 값이그냥 0이들어온다
};
