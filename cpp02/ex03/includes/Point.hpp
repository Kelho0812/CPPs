class Point {
private:
  float x;
  float y;

public:
	Point();
	Point(float x, float y);
	~Point();
	Point(const Point &point);
	Point &operator=(const Point &old_point);
	float GetX(void);
	float GetY(void);
};