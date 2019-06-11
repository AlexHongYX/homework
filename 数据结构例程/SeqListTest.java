public class SeqListTest{

	int size = 0;
	int[] array;
	
	public SeqListTest(int[] array){
		//1.this.array和array不是一回事
		//2.申请的空间至少需要array.length长
		this.array = new int[array.length];
		
		//3.把传入数组的所有元素copy到属性array中
		for(int i=0;i<array.length;i++){
			this.array[i] = array[i];
		}
		
		this.size = array.length;
	}

	public void insert(int index,int element){
		//插到最后一个也可以
		if(index<0||index>size){
			System.out.println("不合法");
			return;
		}
		
		ensureCapacity();
		
		for(int i = size-1;i>=index;i--){
			array[i+1] = array[i];
		}
		array[index] = element;
		size++;
		
	}
	
	public void erase(int index){
		//删除只能删除数组现有元素
		if(index<0||index>=size){
			System.out.println("不合法");
		}else{
			for(int i=index;i<size-1;i++){
				array[i] = array[i+1];
			}
			/*
				for(int i=index+1;i<size;i++){
					array[i-1] = array[i];
				}
			*/
			array[--size] = 0;
		}
	}
	
	private void ensureCapacity(){
		if(size<array.length){
			return;
		}
		int oldCapacity = array.length;
		int newCapacity = oldCapacity + oldCapacity/2;
		int[] newArray = new int[newCapacity];
		
		for(int i=0;i<size;i++){
			newArray[i] = array[i];
		}
		
		this.array = newArray;
	}
	
	public String toString(){
		return Arrays.toString(Array.copyOf(array,size));
	}
	
	public static void main(String[] args){
		int[] array = {1,2,3,45};
	}
	
}