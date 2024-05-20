class Fixed
{
  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);

  private:
	int integer;
	static const int f_bits;
};