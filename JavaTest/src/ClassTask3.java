/**
 * Created by xiaoaxiao on 2019/10/6
 * Description:
 */

class Person{
    private String ID;
    private String name;
    private String gender;
    private float height;
    private float weight;

    public String getID() {
        return ID;
    }

    public void setID(String ID) {
        this.ID = ID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public float getHeight() {
        return height;
    }

    public void setHeight(float height) throws Exception {
        if (height<10||height>250){
            throw new Exception("请输入人的身高");
        }
        this.height = height;
    }

    public float getWeight() {
        return weight;
    }

    public void setWeight(float weight) throws Exception {
        if (weight<0||weight>500){
            throw new Exception("请输入人的体重");
        }
        this.weight = weight;
    }
}

public class ClassTask3 {

    public static void main(String[] args) throws Exception {
        Person person = new Person();
        person.setID("123456");
        person.setGender("男");
        person.setName("张三");
        person.setHeight(-15);
        person.setWeight(50);

        System.out.println("ID:"+person.getID());
        System.out.println("Gender:"+person.getGender());
        System.out.println("Name:"+person.getName());
        System.out.println("Height:"+person.getHeight());
        System.out.println("Weight:"+person.getWeight());
    }

}
