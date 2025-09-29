class polygon{
protected:
	int width,hieght;
public:
	void set_value(int w,int h){
		width=w;hieght=h;
	}
};


class rectangle:public polygon{

public:
	float area(){
		return width*hieght;
	}
};
class triangle:public polygon{

public:
	float area(){
return 0.5* width*hieght;
	}
};