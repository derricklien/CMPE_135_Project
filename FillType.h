#ifndef FILLTYPE_H_
#define FILLTYPE_H_

class FillType
{
public:
    virtual ~FillType() {}

    virtual void fill() = 0;
};

#endif /* FILLTYPE_H_ */
