async function put(url, data) {
	const response = await fetch(url, {
		method: "PUT",
		headers: {
			"Content-type": "application/json",
			Name: "Akash",
			Email: "akashsingh095@gmail.com",
			College: "Lovely Professional University",
			StudentId: "11805342",
			FileName: "res.js",
		},
		body: JSON.stringify(data),
	});

	const resData = await response.json();

	return resData;
}