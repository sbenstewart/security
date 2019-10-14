<html>
<head>
	<title>C Program</title>
</head>

<body>
<?php
if(isset($_POST['Submit'])) {	
	$name = mysqli_real_escape_string($conn, $_POST['name']);
		
	// checking empty fields
	if(empty($name) || empty($age) || empty($email)) {
				
		if(empty($name)) {
			echo "<font color='red'>Name field is empty.</font><br/>";
		}
		
		//link to the previous page
		echo "<br/><a href='javascript:self.history.back();'>Go Back</a>";
	} else { 
		// if all the fields are filled (not empty) 
		$output = shell_exec('/d/Users/sf12/Desktop/3513/2/bufferOverflow/code.exe 25134545672467');
		echo $output;
	}
}
?>
</body>
</html>
