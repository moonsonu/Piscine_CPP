#ifndef VEC2_H
# define VEC2_H

struct Vec2
{
	Vec2(void);
	Vec2(int x_, int y_);
	Vec2(Vec2 const& v);
	~Vec2(void);

	Vec2& operator=(Vec2 const& v);
	Vec2 operator+(Vec2 const& v);
	Vec2 operator-(Vec2 const& v);

	int	x;
	int y;
};

#endif
