"use client";

import { useState } from "react";


export const Counter = () => {
    const [count, setCount] = useState(0);

    return (
        <div>
            <p>Counter: {count}</p>
            <button onClick={() => setCount(count + 1)}>Increase</button>
            <button onClick={() => setCount(count - 1)}>Decrease</button>
        </div>
    )
}