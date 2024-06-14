# Path to wkhtmltopdf executable (adjust as needed)
$wkhtmltopdfPath = "C:\Program Files\wkhtmltopdf\bin\wkhtmltopdf.exe"

# Input HTML file (variables.html in your case)
$inputHtmlFile = ".\variables.html"

# Output PDF file (variables.pdf)
$outputPdfFile = ".\variables.pdf"

# Execute the conversion
& $wkhtmltopdfPath $inputHtmlFile $outputPdfFile
