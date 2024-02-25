import profilePic from './assets/profile-pic.jpg'

const Card = () => {
  return (
    <div className="card">
      <img className="card-image" src={profilePic} alt="profile picture"></img>
      <h2 className="card-title">Ezra</h2>
      <p className="card-text">I play video games</p>
    </div>
  );
}

export default Card
