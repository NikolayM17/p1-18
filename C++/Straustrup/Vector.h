class Vector {
  public:
    Vector(int s);
    Vector(std::initializer_list<double>);

    Vector(const Vector& a);            //copy constructor
    Vector& operator=(const Vector& a); //copy assignment

    Vector(Vector&& a);                //move constructor
    Vector& operator=(Vector&& a);     //move assignment

    ~Vector();

    double& operator[](int i);
    int size() const;
    void print_elems() const;
  private:
    double * elem;
    int sz;
};