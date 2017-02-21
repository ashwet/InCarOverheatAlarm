import java.util.Properties;
import javax.mail.*;
import javax.mail.internet.*;
import javax.activation.*;

public class SendEmail {
	public static void main(String [] args) {    
	      // Recipient's email ID needs to be mentioned.
	      String to = "npendhar@uncc.edu";

	      // Sender's email ID needs to be mentioned
	      String from = "avdhootdeshpande049@gmail.com";

	      // Assuming you are sending email from localhost
	      String host = "smtp.gmail.com";

	      // Get system properties
	      Properties properties = System.getProperties();
	      // Setup mail server
	      properties.setProperty("mail.smtp.host", host);
	      properties.put("mail.smtp.port", "465");
	      properties.put("mail.smtp.starttls.enable","true");
	      properties.put("mail.smtp.debug", "true");
	      properties.put("mail.smtp.auth", "true");
	      properties.put("mail.smtp.socketFactory.port", "465");
	      properties.put("mail.smtp.socketFactory.class", "javax.net.ssl.SSLSocketFactory");
	      properties.put("mail.smtp.socketFactory.fallback", "false");
	      properties.setProperty("mail.user", "avdhootdeshpande049@gmail.com");
	      


	      // Get the default Session object.
	      Session session = Session.getDefaultInstance(properties);

	      try {
	         // Create a default MimeMessage object.
	         MimeMessage message = new MimeMessage(session);

	         // Set From: header field of the header.
	         message.setFrom(new InternetAddress(from));

	         // Set To: header field of the header.
	         message.addRecipient(Message.RecipientType.TO, new InternetAddress(to));

	         // Set Subject: header field
	         message.setSubject("WSN Project!");

	         // Now set the actual message
	         message.setText("WSN Project");

	         // Send message
	         Transport transport = session.getTransport("smtps");
	            transport.connect("smtp.gmail.com", 465, "avdhootdeshpande049@gmail.com", "avadhoot@123");
	            transport.sendMessage(message, message.getAllRecipients());
	            transport.close();  
	         //Transport.send(message);
	         System.out.println("Sent message successfully....");
	      }catch (MessagingException mex) {
	         mex.printStackTrace();
	      }
	   }
}
