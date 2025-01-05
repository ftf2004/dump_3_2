function showForm() {
    let form = document.getElementById("contactForm");
    form.style.display = "block";

    let button = document.getElementById("showFormButton");
    button.style.display = "none";
} 

function updateTime() {
    const now = new Date();
    const timeString = now.toLocaleTimeString();
    document.getElementById("time").textContent = timeString;
}

  // Update time every second
setInterval(updateTime, 1000);
updateTime(); // Initialize immediately

function validateForm() {
    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let phone = document.getElementById("phone").value;
    let gender = document.getElementById("gender").value;
    let errorMessage = document.getElementById("error-message");
    let successMessage = document.getElementById("success-message");

    errorMessage.innerHTML = "";  
    successMessage.innerHTML = "";  

    if (name === "" || email === "" || phone === "" || gender === "") {
        errorMessage.innerHTML = "All fields (Name, Email, Phone, Gender) are required.";
        return false;  
    }

    let emailPattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
    if (!email.match(emailPattern)) {
        errorMessage.innerHTML = "Please enter a valid email address.";
        return false;
    }

    let phonePattern = /^\d{10}$/;
    if (!phone.match(phonePattern)) {
        errorMessage.innerHTML = "Please enter a valid phone number (e.g., 1234567890).";
        return false;
    }

    successMessage.innerHTML = "Form Submitted Successfully!";
    return false;  
}