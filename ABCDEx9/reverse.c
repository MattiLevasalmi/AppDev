int reverse(int n) {
	int a, b, c, d, e;
	e = n % 10;
	d = (n / 10) % 10;
	c = (n / 100) % 10;
	b = (n / 1000) % 10;
	a = n / 10000;
	return (e * 10000 + d * 1000 + c * 100 + b * 10 + a);
}