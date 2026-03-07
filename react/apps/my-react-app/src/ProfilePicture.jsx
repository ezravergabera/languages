import React from 'react'

const ProfilePicture = () => {
    const imageUrl = './src/assets/profile-pic.jpg'

    const handleClick = (e) => e.target.style.display = "none";

    return (
        <img src={imageUrl} onClick={(e) => handleClick(e)}></img>
    );
}

export default ProfilePicture
