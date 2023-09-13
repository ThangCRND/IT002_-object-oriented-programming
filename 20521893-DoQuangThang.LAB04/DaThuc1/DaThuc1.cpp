#include "Dathuc1.h"

Dathuc::Dathuc()
{
    Bac = 0;
}

Dathuc::~Dathuc(){}

void Dathuc::Input()
{
    cout<<"Bac da thuc: ";
	  cin>>Bac;
    for(int i = 0; i<= Bac; i++)
    {
        cout<<"Nhap he so thu "<<i<<": ";
        cin>>Heso[i];
    }
}

void Dathuc::Output()
{
    if(Heso[0]!=0)
	    cout<<Heso[0]<<" ";
    if(Heso[1]!=0)
    {
        if(Heso[1]==1)
		     cout<<"x";
        else if(Heso[1]==-1)
		     cout<<"-x";
        else
        {
            if(Heso[1]>0)
			   cout<<" + "<<Heso[1]<<"x";
            else if(Heso[1]<0)
			    cout<<" - "<<abs(Heso[1])<<"x";
        }
    }
    for(int i = 2; i<= Bac; i++)
    {
       // if(Heso[i]!=0)
       do
	   {
            if(Heso[i]==1)
			   cout<<" + "<<Heso[i]<<"x^"<<i;
            else if(Heso[i]==-1)
			   cout<<" - "<<Heso[i]<<"x^"<<i;
            else
            {
                if(Heso[i]>0)
				    cout<<" + "<<Heso[i]<<"x^"<<i;
                else
				    cout<<" - "<<abs(Heso[i])<<"x^"<<i;
            }
        }while (Heso[i]!=0);
    }
}

istream& operator>>(istream& is, Dathuc& dt)
{
    cout<<"Bac cua da thuc: ";
	     cin>>dt.Bac;
    for(int i = 0; i<= dt.Bac; i++)
    {
        cout<<"Nhap he so thu "<<i<<": ";
        cin>>dt.Heso[i];
    }
    return is;
}

ostream& operator<<(ostream& os, Dathuc dt)
{
   if(dt.Heso[0]!=0)
       cout<<dt.Heso[0]<<" ";
    if(dt.Heso[1]!=0)
    {
        if(dt.Heso[1]==1)
		   cout<<"x";
        else if(dt.Heso[1]==-1)
		   cout<<"-x";
        else
        {
            if(dt.Heso[1]>0)
			  cout<<" + "<<dt.Heso[1]<<"x";
            else if(dt.Heso[1]<0)
			   cout<<" - "<<abs(dt.Heso[1])<<"x";
        }
    }
    for(int i = 2; i<= dt.Bac; i++)
    {
        if(dt.Heso[i]!=0)
        {
            if(dt.Heso[i]==1)
			     cout<<" + "<<dt.Heso[i]<<"x^"<<i;
            else if(dt.Heso[i]==-1)
			      cout<<" - "<<dt.Heso[i]<<"x^"<<i;
            else
            {
                if(dt.Heso[i]>0)
				    cout<<" + "<<dt.Heso[i]<<"x^"<<i;
                else
				   cout<<" - "<<abs(dt.Heso[i])<<"x^"<<i;
            }
        }
    }
}

Dathuc Dathuc::operator+(Dathuc D)
{
    if(this->Bac >= D.Bac)
    {
        for(int i = 0; i<=this->Bac; i++)
        {
            this->Heso[i] = this->Heso[i] + D.Heso[i];
        }
        return *this;
    }

    else
    {
        for(int i = 0; i <= D.Bac; i++)
        {
            D.Heso[i] = D.Heso[i] + this->Heso[i];
        }
        return D;
    }

}

Dathuc Dathuc::operator-(Dathuc D)
{
    if(this->Bac >= D.Bac)
    {
        for(int i = 0; i <= this->Bac; i++)
        {
            this->Heso[i] = this->Heso[i] - D.Heso[i];
        }
        return *this;
    }

    else
    {
        for(int i = 0; i <= D.Bac; i++)
        {
            D.Heso[i] = D.Heso[i] - this->Heso[i];
        }
        return D;
    }

}
