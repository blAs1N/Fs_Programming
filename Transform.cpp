#include "Transform.h"
#include "GameDirector.h"

Transform::Transform(Object* entity, const Vector2& pos, const Vector2& scale, float angle)
	: IComponent(entity),
	m_pos(pos),
	m_scale(scale),
	m_angle(angle) {}

Transform::Transform(const Transform& transform)
	: IComponent(&transform.GetEntity()),
	m_pos(transform.m_pos),
	m_scale(transform.m_scale),
	m_angle(transform.m_angle) {}

void Transform::Init() {}

void Transform::Update() {}

void Transform::Clear() {}

const Utility::Vector2& Transform::GetPos() const noexcept {
	return m_pos;
}

void Transform::SetPos(const Vector2& pos) noexcept {
	m_pos = pos;
}

void Transform::SetPos(const float x, const float y) noexcept {
	m_pos.Set(x, y);
}

const Utility::Vector2& Transform::GetScale() const noexcept {
	return m_scale;
}

void Transform::SetScale(const Vector2& scale) noexcept {
	m_scale = scale;
}

void Transform::SetScale(const float x , const float y) noexcept {
	m_scale.Set(x, y);
}

const float& Transform::GetAngle() const noexcept {
	return m_angle;
}

void Transform::SetAngle(const float angle) noexcept {
	m_angle = angle;

	while (m_angle >= 360)
		m_angle -= 360;
}