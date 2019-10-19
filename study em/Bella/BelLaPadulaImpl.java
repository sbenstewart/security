import java.util.*;
import java.lang.*;
import java.io.*;

class Obj{
	int id,securityLevel;
	String data;
	Obj(int id,int securityLevel,String data){
		this.id=id;
		this.securityLevel=securityLevel;
		this.data=data;
	}
	public void read(Obj obj){
		if(securityLevel < obj.securityLevel)
			System.out.println("Can't read, Object is at a higher security level");
		else
			System.out.println("Read data: "+obj.data+" (Object was at a lower security level)");
	}
	public void write(Obj obj,String data){
		if(securityLevel > obj.securityLevel)
			System.out.println("Can't write, Object is at a lower security level");
		else{
			obj.data=data;
			System.out.println("Written successfully!"+" (object was at a higher security level)  ");
		}
	}
	public void print(){
		System.out.println("id: "+this.id+" Security Level: "+this.securityLevel+" Data: "+this.data);
	}
}
class BelLaPadulaImpl{
	public static void main(String[] args){
		Obj obj1,obj2;
		obj1=new Obj(1,0,"This is object1 data");
		obj2=new Obj(2,1,"This is object2 data");
		obj1.print();
		obj2.print();
		obj1.read(obj2);
		obj2.read(obj1);
		obj1.write(obj2,"Modified Data");
		obj2.write(obj1,"Modified Data");
		obj1.print();
		obj2.print();
	}
}
