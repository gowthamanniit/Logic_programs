//<applet code="ShomeImage.class" width="600" height="700"></applet>
import java.awt.*;
import java.awt.image.ImageObserver;
import java.applet.*;


public class ShowImage extends Applet {
	
	Toolkit tt=Toolkit.getDefaultToolkit();
	Image img=tt.getImage("1.jpg");

	int i=0;
	
	public void paint(Graphics g)
	{
		try
		{
		g.drawImage(img, 100+i, 100,(ImageObserver) this);
		Thread.sleep(50);
		i=i+5;
		if(i>=1000)
			i=0;
		repaint();
		}
		catch(Exception e)
		{
			
		}
	}
}
