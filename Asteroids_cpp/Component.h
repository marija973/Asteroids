#pragma once
#include <cstdint>

class Component
{
public:
	
	Component(class Actor* owner, int updateOrder = 100);
	virtual ~Component();
	// Update this component by delta time
	virtual void Update(float deltaTime);
	// Process input for this component
	virtual void ProcessInput(const uint8_t* keyState) {}

	int GetUpdateOrder() const { return mUpdateOrder; }
protected:
	// Owning actor
	class Actor* mOwner;
	// Update order of component
	int mUpdateOrder;
};
