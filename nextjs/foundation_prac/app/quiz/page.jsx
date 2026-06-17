'use client';
import { useState } from 'react';

export default function Quiz() {
    const [answer, setAnswer] = useState('');
    const [error, setError] = useState('');
    const [status, setStatus] = useState('typing');

    if (status == 'success') {
        return <h1>Congratulations!</h1>
    }

    async function handleSubmit(e) {
        e.preventDefault();
        setStatus('submitting');
        try {
            await submitForm(answer);
            setStatus('success');
        } catch(err) {
            setStatus('typing');
            setError(err);
        }
    }

    function handleTextareaChange(e) {
        setAnswer(e.target.value);
    }

    return (
        <>
            <html>
                <body>
                    <h2>Quiz</h2>
                    <p>
                        Who is the prettiest person I know?
                    </p>
                    <form onSubmit={handleSubmit}>
                        <textarea
                            value={answer}
                            onChange={handleTextareaChange}
                            disabled={status === 'submitting'}
                        >

                        </textarea>
                        <br/>
                        <button
                            disabled={
                                answer.length === 0 ||
                                status === 'submitting'
                            }
                        >
                            Submit
                        </button>
                        {error !== null &&
                            <p className='Error'>
                                {error.message}
                            </p>
                        }
                    </form>
                </body>
            </html>
        </>
    );

    function submitForm(answer) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                let shouldError = answer.toLowerCase().trim() !== 'arjie'
                if (shouldError) {
                    reject(new Error("Good Guess, but you're wrong."));
                } else {
                    resolve();
                }
            }, 1500);
        });
    }
}