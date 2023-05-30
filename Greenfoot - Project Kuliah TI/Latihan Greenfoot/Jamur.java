import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Jamur here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Jamur extends Actor
{
    /**
     * Act - do whatever the Jamur wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        // Add your action code here.
        
        setLocation(getX(),getY()+2);
        if (getY()>390){
            setLocation(20+Greenfoot.getRandomNumber(560) , 0);
        
        }
        if (isTouching(KupuKupu.class)){
            getWorld().addObject(new gameover(),280,180);
            Greenfoot.stop();
        }
        
    }
}
