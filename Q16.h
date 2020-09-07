#ifndef Q16_H
#define Q16_H

class Q16
{
  private:
     int x_ =0;

  public:
	void con();
	void pcon(int n);
    int get() const { return x_; } 
	int operator+(const Q16 &other) const;
	bool operator==(const Q16 &other) const;
};

#endif
