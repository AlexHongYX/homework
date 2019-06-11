// Sequence List
// 顺序表中保存的数据元素类型是int

import java.util.Arrays;

public class SeqList{
	
	//属性
	private int[] array;        //用来保存数据
	private int size;			//用来保存array已经有的数据个数

	//构造方法
	public SeqList(){
		//初始化部分
		//1.初始化array，给定一个默认大小
		//2.初始化size，没有数据，所以size=0
		array = new int[11];	//11可以调节
		size = 0;
	}
	
	//支持的方法
	//头插法
	public void pushFront(int element){
		//i是数据下标，遍历范围是[size-1,0]
		for(int i=size-1;i>=0;i--){
			array[i+1] = array[i];
		}
		
		//[0]
		array[0] = element;
		
		//容量+1
		size++;
	}
	
	//尾插法
	public void pushBack(int element){
		array[size++] = element;
		//先不考虑越界
	}
	
	//中间插入，根据下标做插入
	public void insert(int index,int element){
		for(int i=size-1;i>=index;i--){
			array[i+1] = array[i];
		}
		array[index] = element;
		
		//容量+1
		size++;
	}
	
	//头删法
	public void popFront(){
		for(int i=1;i<size;i++){
			array[i-1] = array[i];
		}
		array[--size] = 0;
	}
	
	//尾删法
	public void popBack(){
		//容量-1,最后一个设为0
		array[--size] = 0;
	}
	
	//删除
	public void erase(int index){
		for(int i=index;i<size;i++){
			array[i] = array[i+1];
		}
		array[--size] = 0;
	}
	
	//查找
	public int indexOf(int element){
		for(int i=0;i<size;i++){
			if(element==array[i]){
				return i;
			}
		}
		return -1;
	}
	
	//根据下标，获取元素
	public int get(int index){
		return array[index];
	}
	
	public int size(){
		return size;
	}
	
	public boolean isEmpty(){
		return size==0;
	}
	
	//便于打印，显示顺序表
	public String toString(){
		//用copyOf截断,后面的0就不要了
		return Arrays.toString(Arrays.copyOf(array,size));
	}
	
	//给定下标，修改下标所在元素的值
	public void set(int index,int element){
		array[index] = element;
	}
	
	//内部使用的方法
	//无论是否需要扩容，调用完这个方法，保证容量一定够用
	private void ensureCapacity(){
		
	}
	
	//删除第一个等于element的元素
	public void remove(int element){
		int index = indexOf(element);
		if(index !=-1){
			erase(index);
		}
	}
	
	//删除所有等于element的元素
	//时间复杂度：O(n),空间复杂度：O(n)
	public void removeAll(int element){
		/*int index;
		while((index = indexOf(element))!=-1){
			erase(index);
		}*/
		
		/*
		int[] newArray = new int[size];
		int j=0;
		//把array中不符合的先移动到新数组
		for(int i=0;i<size;i++){
			if(array[i] != element){
				newArray[j++] = array[i];
			}
		}
		
		//把新数组搬回去
		//更新size
		for(int i=0;i<j;i++){
			array[i] = newArray[i];
		}
		size = j;*/
		int j=0;
		for(int i=0;i<size;i++){
			if(array[i]!=element){
				array[j++] = array[i];
			}
		}
		size = j;
	}
	
	public static void main(String[] args){
		SeqList seqList = new SeqList();
		seqList.pushBack(0);
		seqList.pushBack(1);
		seqList.pushBack(2);
		System.out.println(seqList.toString());
		
		seqList.erase(1);
		System.out.println(seqList.toString());
		
		int ret1 = seqList.indexOf(1);
		System.out.println(ret1);
		
		int ret2 = seqList.get(2);
		System.out.println(ret2);
		
		seqList.set(1,10);
		System.out.println(seqList.toString());
	}

}