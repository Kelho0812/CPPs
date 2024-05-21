class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	int getRawBits(void);
	void setRawBits(int const raw);


private:
	int integer;
	static const int f_bits;
};