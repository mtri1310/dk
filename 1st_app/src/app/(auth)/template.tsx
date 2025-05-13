// app/layout.tsx
"use client"; 

import Link from "next/link";
import {usePathname} from "next/navigation";
import { useState } from "react";
import "./styles.css";

const navLinks = [
  { name:"Register", href:"/register" },
  { name:"Login", href:"/login" },
  { name:"Forgot Password", href:"/forgot-password" },
];

// export const metadata = {
//     title: 'My App',
//     description: 'Description here',
//   };
  
export default function AuthLayout({
  children,
}: {
  children: React.ReactNode;
}) {
  const [input, setInput] = useState("");
  const pathname = usePathname()
  return (
    <div>
      <div>
        <input value={input} onChange={(e) => {
          setInput(e.target.value)
        }} type="text" />
      </div>
      {navLinks.map((link) => {
        const isActive = pathname === link.href || (pathname.startsWith(link.href) && pathname !== "/")
        return (
          <Link className={isActive ? "font-bold mr-4 ml-4" : "text-blue-500 mr4 ml-4"} key={link.name} href={link.href}>
            {link.name}
          </Link>
        )
      })}
    {children}

    </div>
  )
}
  