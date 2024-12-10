fetch("https://api.adviceslip.com/advice")
    .then((response) => {
        if (!response.ok) {
            throw new Error("Something went wrong");
        }
        return response.json();
    })
    .then((data) => {
        console.log(data.slip.id);
    })
    .catch((error) => {
        console.error("Error:", error.message);
    });
