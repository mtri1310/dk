"use client"
import { useState } from "react"

export default function DashboardPage() {
    const [name, setName] = useState("");
    console.log('Client Dashboard page')
    return (
        <div>
            <h1>Dashboard</h1>
            <label htmlFor="nameInput">Name:</label>
            <input
                id="nameInput"
                value={name}
                onChange={(e) => {setName(e.target.value)}}
                placeholder="Enter your name"
            />
            <p>Hello {name}</p>
        </div>
    )
}