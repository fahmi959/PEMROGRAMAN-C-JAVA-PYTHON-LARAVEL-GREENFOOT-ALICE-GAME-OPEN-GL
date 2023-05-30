import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class anim1 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class anim1 extends Actor
{
    /**
     * Act - do whatever the anim1 wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    private GreenfootImage[] gambarSemut = new GreenfootImage[2];
    private int jeda=2, num=0;
    public void act() 
    {
        anim();
        setImage(gambarSemut[num]);
        num++;
        if(num>=2){
            num = 0;
        }
        setLocation(getX(), getY());
    }
    
    public void anim()
    {
        for(int i=0; i<2; i++){
            gambarSemut[i] = new GreenfootImage("semut_"+(i)+".png");
        }
    }
}
