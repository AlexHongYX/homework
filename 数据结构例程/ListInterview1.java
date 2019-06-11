class ListNode{
	public int val;
	public ListNode next;
}

public class ListInterview1{
	
	public ListNode partition(ListNode head,int x){
		if(head==null){
			return null;
		}
		ListNode small = null;
		ListNode big = null;
		ListNode smallLast = null;
		ListNode bigLast = null;
		ListNode nextNode = null;
		for(ListNode cur=head;cur!=null;cur=nextNode){
			nextNode = cur.next;
			if(cur.val<x){
				if(small==null){
					small = cur;
					//smallLast = cur;
				}else{
					smallLast.next = cur;
					//smallLast = smallLast.next;
				}
				//两步合为一步
				smallLast = cur;
			}else{
				if(big==null){
					big = cur;
					//bigLast = cur;
				}else{
					bigLast.next = cur;
					//bigLast = bigLast.next;
				}
				bigLast = cur;
			}
		}
		if(smallLast==null){
			return big;
		}
		
		//需要保证链表的最后一个结点的next==null
		if(bigLast!=null){
			bigLast.next = null;
		}
		smallLast.next = big;
		return small;
	}
}

