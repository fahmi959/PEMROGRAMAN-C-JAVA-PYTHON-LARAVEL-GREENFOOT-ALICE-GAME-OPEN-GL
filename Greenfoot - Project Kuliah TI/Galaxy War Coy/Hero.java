import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Hero here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Hero extends Actor
{
    /**
     * Act - do whatever the Hero wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    int waktu_peluru=0;
    
    public void act()
    {
        // Add your action code here.
        
        waktu_peluru++;
        if (Greenfoot.isKeyDown("up")){
            setLocation(getX(),getY()-3);
        } else if (Greenfoot.isKeyDown("down")){
            setLocation(getX(),getY()+3); }
              if (Greenfoot.isKeyDown("right")){
            setLocation(getX()+3,getY());
        } else if (Greenfoot.isKeyDown("left")){
            setLocation(getX()-3,getY()); 
        }
       // if (Greenfoot.isKeyDown("g")){
             if(waktu_peluru == 30){
                 
             getWorld().addObject(new Peluru(), getX(), getY()+10);
             waktu_peluru = 0;
            }
        // }
    }
}
